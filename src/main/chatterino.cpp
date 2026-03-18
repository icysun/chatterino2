#include <TwitchClient/TwitchClient.h>

// Modify the chatter profile opening to handle Lead Moderators
void ChatterinoApp::openChatterProfile(const ChatMessage& message) {
    if (TwitchClient::getInstance().isLeadModerator()) {
        // Handle Lead Moderator specific profile actions
        // ... existing code for lead moderators
    } else {
        // Normal chatter profile opening
        // ... existing code for non-lead moderators
    }
}