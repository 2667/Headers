//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBGroupFeedViewControllerDelegate-Protocol.h"
#import "WBGroupManagementEventHandlerProtocol-Protocol.h"

@class NSString, UIAlertAction, WBAlertController, WBViewController;
@protocol WBGroupViewControllerProtocol;

@interface WBGroupManagementEventHander : NSObject <WBGroupFeedViewControllerDelegate, WBGroupManagementEventHandlerProtocol>
{
    WBViewController<WBGroupViewControllerProtocol> *_controller;
    id loadOperationHandle;
    UIAlertAction *_alertActionSure;
    WBAlertController *_alert;
}

@property(nonatomic) __weak WBViewController<WBGroupViewControllerProtocol> *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)changedAirborneNotiStatus:(_Bool)arg1 groupSettingItem:(id)arg2;
- (void)removeAffilication:(id)arg1;
- (void)modifyGroupPostion:(id)arg1;
- (void)deleteSpotWithPOIListViewController:(id)arg1;
- (void)poiListViewControllerDidCancel:(id)arg1;
- (void)poiListViewController:(id)arg1 didSelectSpot:(id)arg2 withSpotEngine:(id)arg3;
- (void)pushGroupMsgRemindViewController;
- (void)showEditGroupVIPPriceWithGroupSettingItem:(id)arg1;
- (void)presentGroupPostionSettingViewController;
- (void)cancleNetworkOperationHandler;
- (void)pushGroupAdministrationViewController;
- (void)showGroupNameCardWithGroupSettingItem:(id)arg1;
- (void)editBulletinContentWithViewController:(id)arg1 isDeleteBullet:(_Bool)arg2;
- (void)WBGroupEditInfoViewController:(id)arg1 didPressRightNaviItem:(id)arg2;
- (void)editGroupIntroWithGroupSettingItem:(id)arg1;
- (void)reportGroup:(id)arg1;
- (void)showUserProfile:(id)arg1;
- (void)relieveBelongToGroup;
- (void)showGroupBlongToGroupSettingSureItem:(id)arg1;
- (void)showGroupBlongToGroupSettingItem:(id)arg1;
- (void)showGroupSharing:(id)arg1;
- (void)showGroupMemebersGroupSettingItem:(id)arg1;
- (void)addGroupMemebersGroupSettingItem:(id)arg1;
- (void)addToBlackListGroupSettingItem:(id)arg1;
- (void)quitGroupGroupSettingItem:(id)arg1;
- (void)deleteChatRecordsGroupSettingItem:(id)arg1;
- (void)saveToContacts:(_Bool)arg1 groupSettingItem:(id)arg2;
- (void)notifyWhenReceivedGroupMessage:(_Bool)arg1 groupSettingItem:(id)arg2;
- (void)receiveGroupWeibo:(_Bool)arg1 groupSettingItem:(id)arg2;
- (void)blockPrivateMessage:(_Bool)arg1 groupSettingItem:(id)arg2;
- (void)stickChat:(_Bool)arg1 groupSettingItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stickChat:(_Bool)arg1 groupSettingItem:(id)arg2;
- (void)startChatGroupSettingItem:(id)arg1;
- (void)jumpToGroupWeiboGroupSettingItem:(id)arg1;
- (void)pushGroupInfoEditViewController;
- (void)textFieldChanged:(id)arg1;
- (void)editGropuNameGroupSettingItem:(id)arg1;
- (void)handleSwitchValueChange:(id)arg1 value:(_Bool)arg2 rowItem:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleCellSelected:(id)arg1 atIndexPath:(id)arg2 rowItem:(id)arg3;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

