


#include "Party.h"
#include "Candidate.h"
#include <iostream>

Party::Party(const string& partyName) : name(partyName) {}

void Party::addMember(Person memberName) {
    members.push_back(memberName);
}

void Party::removeMember(const string& memberName) {
    auto it = find_if(members.begin(), members.end(), [&memberName](const Person& p) {
        return p.getName() == memberName;
    });
    if (it != members.end()) {
        members.erase(it);
    }
}

void Party::storeMemberDetails(const string& memberName, int age, string gender) {
    // Check if member already exists
    if (find(members.begin(), members.end(), Person(memberName, age, string("gender"))) == members.end()) {
        members.push_back(Person(memberName, age, string("gender")));
    }
}

void Party::manageCandidates() {
    int choice;
    do {
        cout << "\nCandidate Management Menu:";
        cout << "\n1. Add Candidate";
        cout << "\n2. Remove Candidate";
        cout << "\n3. Display Candidate List";
        cout << "\n4. Exit Candidate Management";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                // Add Candidate
                string candidateName;
                int age;
                char gender;
                // Get candidate details from user
                cout << "Enter candidate name: ";
                cin >> candidateName;
                cout << "Enter candidate age: ";
                cin >> age;
                cout << "Enter candidate gender (M/F): ";
                cin >> gender;
                // Create new candidate object and add to candidates vector
                Candidate* newCandidate = new Candidate(candidateName, age, "gender", 0);
                candidates.push_back(newCandidate);
                cout << "Candidate added successfully.\n";
                break;
            }
            case 2: {
                // Remove Candidate
                if (candidates.empty()) {
                    cout << "No candidates to remove.\n";
                } else {
                    // Display current candidates
                    cout << "Current Candidates:\n";
                    for (const auto& candidate : candidates) {
                        cout << candidate->getName() << endl;
                    }
                    string candidateName;
                    cout << "Enter candidate name to remove: ";
                    cin >> candidateName;
                    // Find and remove the candidate from the candidates vector
                    auto it = find_if(candidates.begin(), candidates.end(), [&candidateName](const Candidate* candidate) {
                        return candidate->getName() == candidateName;
                    });
                    if (it != candidates.end()) {
                        candidates.erase(it);
                        cout << "Candidate removed successfully.\n";
                    } else {
                        cout << "Candidate not found.\n";
                    }
                }
                break;
            }
            case 3: {
                // Display Candidate List
                cout << "Candidate List:\n";
                for (const auto& candidate : candidates) {
                    cout << "Name: " << candidate->getName() << ", Age: " << candidate->getAge() << ", Gender: " << candidate->getGender() << endl;
                }
                break;
            }
            case 4:
                cout << "Exiting Candidate Management.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
}


