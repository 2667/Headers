//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "WBContactUserCellDelegate-Protocol.h"
#import "WBLoginManagerProtocol-Protocol.h"

@class LOTAnimationView, NSDictionary, NSMutableArray, NSString, UIBarButtonItem, UILabel, UIView, WBBatchFollowEngine, WBFindFriendsEngine, WBStyleButton;

@interface WBContactListViewController : WBTableViewController <WBLoginManagerProtocol, WBContactUserCellDelegate>
{
    _Bool isInLoginManager;
    _Bool _isDownLoadSuccess;
    _Bool _dismiss;
    NSDictionary *_params;
    LOTAnimationView *_loadContactAnimationView;
    UILabel *_lottieLabel;
    UIView *_headerView;
    WBStyleButton *_batchFollowBtn;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_seperaterLine;
    UIBarButtonItem *_backButtonItem;
    WBFindFriendsEngine *_findFriendsEngine;
    WBBatchFollowEngine *_batchFollowEngine;
    NSMutableArray *_unfollowFriends;
    NSString *_topTitle;
    NSString *_subTitle;
    NSString *_followBtnTitle;
    NSString *_skipTitle;
    unsigned long long _followCount;
    NSString *_scene;
}

@property(nonatomic, getter=isDismiss) _Bool dismiss; // @synthesize dismiss=_dismiss;
@property(nonatomic) _Bool isDownLoadSuccess; // @synthesize isDownLoadSuccess=_isDownLoadSuccess;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long followCount; // @synthesize followCount=_followCount;
@property(copy, nonatomic) NSString *skipTitle; // @synthesize skipTitle=_skipTitle;
@property(copy, nonatomic) NSString *followBtnTitle; // @synthesize followBtnTitle=_followBtnTitle;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *topTitle; // @synthesize topTitle=_topTitle;
@property(retain, nonatomic) NSMutableArray *unfollowFriends; // @synthesize unfollowFriends=_unfollowFriends;
@property(retain, nonatomic) WBBatchFollowEngine *batchFollowEngine; // @synthesize batchFollowEngine=_batchFollowEngine;
@property(retain, nonatomic) WBFindFriendsEngine *findFriendsEngine; // @synthesize findFriendsEngine=_findFriendsEngine;
@property(retain, nonatomic) UIBarButtonItem *backButtonItem; // @synthesize backButtonItem=_backButtonItem;
@property(retain, nonatomic) UILabel *seperaterLine; // @synthesize seperaterLine=_seperaterLine;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WBStyleButton *batchFollowBtn; // @synthesize batchFollowBtn=_batchFollowBtn;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UILabel *lottieLabel; // @synthesize lottieLabel=_lottieLabel;
@property(retain, nonatomic) LOTAnimationView *loadContactAnimationView; // @synthesize loadContactAnimationView=_loadContactAnimationView;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) _Bool isInLoginManager; // @synthesize isInLoginManager;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)setupNavgationViews;
- (void)backButtonPressed:(id)arg1;
- (void)gotoHome;
- (id)getParamsWithSelectedUsers;
- (id)getSprParams;
- (void)batchFollowEvent:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clickOnWBContactUserCell:(id)arg1 isFollowed:(_Bool)arg2;
- (void)uploadContactsCompletion:(CDUnknownBlockType)arg1;
- (void)downloadContacts;
- (void)updateUnfollowedFriends:(id)arg1;
- (void)removeAnimationView;
- (void)configSubviewsFrame;
- (void)setupSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updatePropertyWithPara:(id)arg1 context:(id)arg2 currentStep:(unsigned long long)arg3;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

