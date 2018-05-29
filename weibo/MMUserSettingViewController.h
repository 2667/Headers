//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCardListViewController.h"

#import "MMGridViewContactCellDelegate-Protocol.h"
#import "MMSingleChatSettingsDelegate-Protocol.h"
#import "WBGridViewDataSource-Protocol.h"
#import "WBGridViewDelegate-Protocol.h"

@class MMButton, MMSwitch, NSString, WBContactEngine, WBConversation, WBGridView, WBProgressHUD, WBUser, WBWeiyouMyProfileInfoView;

@interface MMUserSettingViewController : WBCardListViewController <MMSingleChatSettingsDelegate, WBGridViewDataSource, WBGridViewDelegate, MMGridViewContactCellDelegate>
{
    _Bool _isFromSettingList;
    _Bool _userRelationshipFollowed;
    WBWeiyouMyProfileInfoView *_profileInfoView;
    WBGridView *_userGridView;
    MMSwitch *_stickieSwitch;
    MMSwitch *_shieldSwitch;
    MMButton *_deleteChatButton;
    MMButton *_blackButton;
    WBUser *_user;
    WBConversation *_chat;
    WBContactEngine *_contactEngine;
    WBProgressHUD *_progressHUD;
}

@property(nonatomic) _Bool userRelationshipFollowed; // @synthesize userRelationshipFollowed=_userRelationshipFollowed;
@property(nonatomic) _Bool isFromSettingList; // @synthesize isFromSettingList=_isFromSettingList;
@property(retain, nonatomic) WBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) WBContactEngine *contactEngine; // @synthesize contactEngine=_contactEngine;
@property(retain, nonatomic) WBConversation *chat; // @synthesize chat=_chat;
@property(retain, nonatomic) WBUser *user; // @synthesize user=_user;
@property(retain, nonatomic) MMButton *blackButton; // @synthesize blackButton=_blackButton;
@property(retain, nonatomic) MMButton *deleteChatButton; // @synthesize deleteChatButton=_deleteChatButton;
@property(retain, nonatomic) MMSwitch *shieldSwitch; // @synthesize shieldSwitch=_shieldSwitch;
@property(retain, nonatomic) MMSwitch *stickieSwitch; // @synthesize stickieSwitch=_stickieSwitch;
@property(retain, nonatomic) WBGridView *userGridView; // @synthesize userGridView=_userGridView;
@property(retain, nonatomic) WBWeiyouMyProfileInfoView *profileInfoView; // @synthesize profileInfoView=_profileInfoView;
- (void).cxx_destruct;
- (void)blockUserWithBlock:(_Bool)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)groupDidCreate:(id)arg1;
- (void)popToViewController;
- (void)addToBlackList;
- (void)deleteConversation;
- (void)shieldSwitch:(id)arg1;
- (void)topChatsNotification:(id)arg1;
- (void)stickieSwitch:(id)arg1;
- (void)showUserProfile;
- (void)showVIPPayView;
- (void)finishRelationshipWithButtonState:(unsigned long long)arg1 isSucessful:(_Bool)arg2 theError:(id)arg3;
- (void)unfollow:(id)arg1;
- (void)relationshipButtonPressed:(id)arg1;
- (void)openGroutMade:(id)arg1;
- (void)selectCellWithContact:(id)arg1;
- (id)gridView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)gridView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInGridView:(id)arg1;
- (void)backButtonClick:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

