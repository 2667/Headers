//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAccessObject.h"

@interface MMGeneralMessageAccessObject : MMAccessObject
{
    int _chatType;
    long long _parentChatId;
}

@property(nonatomic) long long parentChatId; // @synthesize parentChatId=_parentChatId;
@property(nonatomic) int chatType; // @synthesize chatType=_chatType;
- (id)picInfoForGroupWithGlobalId:(long long)arg1 chatId:(long long)arg2;
- (id)picInfoWithGlobalId:(long long)arg1;
- (_Bool)isMessageFansGroupFeatureEnabled;
- (int)getChatCountWithParentsChatId:(long long)arg1;
- (_Bool)updateParentChatLatestMessageWithParentChatId:(long long)arg1 parentChatType:(int)arg2;
- (_Bool)updateChatUnreadCountWithChatId:(long long)arg1 countToClear:(long long)arg2;
- (id)latestMessageInfoWithChatId:(long long)arg1;
- (id)latestMessageInfoWithParentChatId:(long long)arg1 andChatId:(long long)arg2;
- (id)latestMessageInfoForBlockedMessageBoxWithTime:(long long)arg1;
- (id)latestMessageInfoWithParentChatId:(long long)arg1;
- (_Bool)clearMessageSending;
- (_Bool)deleteMessageSending:(long long)arg1;
- (_Bool)deleteFailedMessageWithMessageId:(long long)arg1;
- (_Bool)deleteAllGroupAt;
- (_Bool)deleteGroupAtInGroup:(long long)arg1;
- (_Bool)deleteAllDraft;
- (_Bool)deleteDraftInChat:(long long)arg1;
- (_Bool)deleteDraftWithChatIdOnly:(long long)arg1;
- (_Bool)markMessageSending:(long long)arg1;
- (_Bool)saveFailedMessageWithMessageId:(long long)arg1 errorCode:(int)arg2 errorMessage:(id)arg3;
- (_Bool)saveOrUpdateGroupAt:(id)arg1;
- (_Bool)updateGroupAt:(id)arg1;
- (_Bool)saveGroupAt:(id)arg1;
- (_Bool)groupAtExists:(long long)arg1;
- (_Bool)saveOrUpdateDraft:(id)arg1 inChat:(long long)arg2;
- (_Bool)updateDraft:(id)arg1 inChat:(long long)arg2;
- (_Bool)saveDraft:(id)arg1 inChat:(long long)arg2;
- (_Bool)draftExists:(long long)arg1;
- (id)queryDraftInChat:(long long)arg1;
- (_Bool)deleteAllNormalChats;
- (_Bool)deleteAllChats;
- (_Bool)deleteChatWithoutTop:(long long)arg1;
- (_Bool)deleteChatWithChatIdOnly:(long long)arg1;
- (_Bool)deleteChat:(long long)arg1;
- (_Bool)clearUnreadCountForAllNormalChats;
- (_Bool)clearUnreadCountForChat:(long long)arg1;
- (_Bool)clearUnreadCountWithChatIdOnly:(long long)arg1;
- (_Bool)openChatFromMessageBox:(long long)arg1;
- (_Bool)closeChatFromMessageBox:(long long)arg1;
- (int)conversationTypeWithChatId:(long long)arg1;
- (_Bool)updateChat:(long long)arg1 invisible:(_Bool)arg2;
- (_Bool)updateChatOpenedCount:(int)arg1 forChat:(long long)arg2;
- (_Bool)updateChatLatestMessageId:(long long)arg1;
- (_Bool)updateBlockedMessageBoxLatestMessageIdWithTime:(long long)arg1;
- (_Bool)updateMarkTimeWithChat:(id)arg1;
- (_Bool)updateMarkTime:(long long)arg1 forChat:(long long)arg2;
- (_Bool)saveOrUpdateChatWithMessage:(id)arg1 isApi:(_Bool)arg2;
- (_Bool)shouldCreateChatWithMessage:(id)arg1;
- (_Bool)saveOrUpdateChatWithMessage:(id)arg1;
- (_Bool)saveOrUpdateChat:(id)arg1 saveMessageSuccess:(_Bool)arg2 isApi:(_Bool)arg3 needCorrection:(_Bool)arg4;
- (long long)latestMessageIdForConversation:(id)arg1;
- (long long)timeForConversation:(id)arg1;
- (_Bool)saveOrUpdateChat:(id)arg1 saveMessageSuccess:(_Bool)arg2 isApi:(_Bool)arg3;
- (_Bool)saveOrUpdateChat:(id)arg1 isApi:(_Bool)arg2 needCorrection:(_Bool)arg3 mySelf:(id)arg4;
- (_Bool)saveOrUpdateChat:(id)arg1 isApi:(_Bool)arg2 mySelf:(id)arg3;
- (_Bool)updateParentId:(long long)arg1 conversationType:(int)arg2 forChat:(long long)arg3;
- (_Bool)updateChatUnreadCountWithMessage:(id)arg1 isApi:(_Bool)arg2;
- (_Bool)updateChatUnreadCountWithChatId:(long long)arg1 chatType:(int)arg2 message:(id)arg3 isApi:(_Bool)arg4;
- (_Bool)updateChatUnreadCount:(unsigned long long)arg1 time:(long long)arg2 inChat:(long long)arg3 chatType:(int)arg4;
- (_Bool)updateChatUnreadCount:(id)arg1 isApi:(_Bool)arg2;
- (_Bool)updateChatLatestMessageWithChatID:(long long)arg1 conversationType:(int)arg2 message:(id)arg3 isApi:(_Bool)arg4;
- (_Bool)updateChatWithMessage:(id)arg1 isApi:(_Bool)arg2;
- (_Bool)updateChat:(id)arg1 isApi:(_Bool)arg2;
- (_Bool)saveChat:(id)arg1 isApi:(_Bool)arg2 needCorrection:(_Bool)arg3;
- (_Bool)saveChat:(id)arg1 isApi:(_Bool)arg2;
- (_Bool)chatExists:(long long)arg1 time:(long long *)arg2 apiCountTime:(long long *)arg3 imCountTime:(long long *)arg4 flags:(int *)arg5;
- (_Bool)chatExists:(long long)arg1 time:(long long *)arg2 imCountTime:(long long *)arg3 flags:(int *)arg4;
- (_Bool)chatExists:(long long)arg1 time:(long long *)arg2 flags:(int *)arg3;
- (_Bool)chatExists:(long long)arg1 time:(long long *)arg2 latestMessageGlobalId:(long long *)arg3 flags:(int *)arg4;
- (int)unreadStrangersMessageCount;
- (int)apiUnreadStrangersMessageCount;
- (int)unreadMessageCount;
- (int)apiUnreadMessageCount;
- (_Bool)saveContacts:(id)arg1;
- (_Bool)clearContacts;
- (id)queryRecentContacts:(int)arg1;
- (long long)queryChatLatestMessageId:(long long)arg1;
- (_Bool)chatExistsWithChatId:(long long)arg1 chatType:(int)arg2;
- (_Bool)chatExists:(long long)arg1;
- (id)queryChat:(long long)arg1;
- (_Bool)updateServerCheckInChat:(long long)arg1 oldGlobalId:(long long)arg2 newGlobalId:(long long)arg3;
- (_Bool)queryServerCheckInChat:(long long)arg1 oldGlobalId:(long long)arg2 newGlobalId:(long long)arg3;
- (_Bool)deleteMessageRangesInChat:(long long)arg1;
- (_Bool)deleteMessageRangesWithChatIdOnly:(long long)arg1;
- (_Bool)deleteMessageRange:(id)arg1;
- (_Bool)saveMessageRange:(id)arg1;
- (unsigned long long)queryRemindTypeWithGroupId:(long long)arg1;
- (long long)querySinceIdForChat:(id)arg1;
- (long long)queryGlobalIdWithMessageId:(long long)arg1 inChat:(long long)arg2;
- (long long)queryMessageIdWithGlobalId:(long long)arg1 inChat:(long long)arg2;
- (id)queryMessageRangesForChat:(long long)arg1 oldGlobalId:(long long)arg2 newGlobalId:(long long)arg3;
- (id)queryChatsWithOffset:(int)arg1 limit:(int)arg2;
- (id)queryChats;
- (long long)queryKickedGroupCountWithMaxChatTime:(long long)arg1 minChatTime:(long long)arg2;
- (id)queryChatsWithMaxChatTime:(long long)arg1 minChatTime:(long long)arg2;
- (unsigned long long)querySpecialCountWithMaxChatTime:(long long)arg1 minChatTime:(long long)arg2;
- (unsigned long long)querySpecialCountAfterChatTime:(long long)arg1;
- (unsigned long long)queryStickCountWithMaxChatTime:(long long)arg1 minChatTime:(long long)arg2;
- (unsigned long long)queryStickCountAfterChatTime:(long long)arg1;
- (id)queryAllStickChat;
- (id)queryAllSpecialChat;
- (id)queryNormalChatWithMaxChatTime:(long long)arg1 minChatTime:(long long)arg2;
- (_Bool)resetSendingMessageAfterLaunch;
- (_Bool)resetSendingMessages:(id)arg1 forGroup:(_Bool)arg2;
- (id)groupTableIdsInChatList;
- (id)groupMessageTable:(long long)arg1;

@end

