//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBGroupSettingRow;

@protocol WBGroupManagementActionProtocol <NSObject>
- (void)showGroupBlongToGroupSettingSureItem:(WBGroupSettingRow *)arg1;
- (void)removeAffilication:(WBGroupSettingRow *)arg1;
- (void)showGroupNameCardWithGroupSettingItem:(WBGroupSettingRow *)arg1;
- (void)editGroupIntroWithGroupSettingItem:(WBGroupSettingRow *)arg1;
- (void)showGroupBlongToGroupSettingItem:(WBGroupSettingRow *)arg1;
- (void)showGroupSizeGroupSettingItem:(WBGroupSettingRow *)arg1;
- (void)showGroupMemebersGroupSettingItem:(WBGroupSettingRow *)arg1;
- (void)addGroupMemebersGroupSettingItem:(WBGroupSettingRow *)arg1;
- (void)addToBlackListGroupSettingItem:(WBGroupSettingRow *)arg1;
- (void)quitGroupGroupSettingItem:(WBGroupSettingRow *)arg1;
- (void)deleteChatRecordsGroupSettingItem:(WBGroupSettingRow *)arg1;
- (void)saveToContacts:(_Bool)arg1 groupSettingItem:(WBGroupSettingRow *)arg2;
- (void)notifyWhenReceivedGroupMessage:(_Bool)arg1 groupSettingItem:(WBGroupSettingRow *)arg2;
- (void)receiveGroupWeibo:(_Bool)arg1 groupSettingItem:(WBGroupSettingRow *)arg2;
- (void)blockPrivateMessage:(_Bool)arg1 groupSettingItem:(WBGroupSettingRow *)arg2;
- (void)stickChat:(_Bool)arg1 groupSettingItem:(WBGroupSettingRow *)arg2;
- (void)startChatGroupSettingItem:(WBGroupSettingRow *)arg1;
- (void)jumpToGroupWeiboGroupSettingItem:(WBGroupSettingRow *)arg1;
- (void)editGropuNameGroupSettingItem:(WBGroupSettingRow *)arg1;
@end

