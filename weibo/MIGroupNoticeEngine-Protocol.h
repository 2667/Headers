//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMGroupNotice, MMGroupNoticeTemplates, NSArray, NSMutableArray;

@protocol MIGroupNoticeEngine <NSObject>
- (void)sendReadStatusForGroupNotice;
- (void)fetchGroupNoticeTemplate;
- (void)updateGroupNoticesWithIsNew:(_Bool)arg1;
- (void)updateGroupNotice:(long long)arg1 isNew:(_Bool)arg2;
- (void)deleteAllGroupNotices;
- (void)deleteGroupNotice:(MMGroupNotice *)arg1;
- (void)approveInviteToGroup:(MMGroupNotice *)arg1;
- (void)approveJoinGroup:(MMGroupNotice *)arg1;
- (void)saveGroupNotices:(NSArray *)arg1;
- (MMGroupNoticeTemplates *)groupNoticeTemplates;
- (NSMutableArray *)queryGroupNotices:(int)arg1 limit:(int)arg2;
- (void)fetchGroupNotices:(long long)arg1 offset:(int)arg2 limit:(int)arg3;
@end

