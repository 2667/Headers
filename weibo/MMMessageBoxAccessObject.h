//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageAccessObject.h"

@interface MMMessageBoxAccessObject : MMMessageAccessObject
{
}

- (_Bool)clearMessageBoxAllChildsConversionUnreadCountWithTime:(long long)arg1;
- (void)clearMessageBoxUnreadCountWithTime:(long long)arg1;
- (_Bool)deleteMessageBoxFolderChat;
- (id)subChatIdsInMessageBoxList;
- (_Bool)updateChatUnreadCountWithChatId:(long long)arg1 clearToCount:(int)arg2 time:(long long)arg3 chatType:(int)arg4;
- (void)updateChatUnreadCountWithDeleteConversation:(id)arg1;
- (_Bool)updateChatLatestMessageIdAfterDeleteChat:(long long)arg1;
- (_Bool)updateChatLatestMessageId:(long long)arg1;
- (int)chatType;

@end

