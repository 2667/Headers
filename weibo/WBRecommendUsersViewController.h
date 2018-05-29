//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "WBLoginManagerProtocol-Protocol.h"
#import "WBRecommendUserCardViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, UIBarButtonItem, UIButton, UILabel, UIView, WBBatchFollowEngine, WBNewRecommendEngine, WBProgressHUD, WBTableViewEmptyView;

@interface WBRecommendUsersViewController : WBTableViewController <UIScrollViewDelegate, WBLoginManagerProtocol, WBRecommendUserCardViewDelegate>
{
    WBBatchFollowEngine *_batchFollowEngine;
    WBNewRecommendEngine *_recommendEngine;
    NSMutableArray *_selectedUsers;
    NSMutableArray *_recommendUsers;
    WBTableViewEmptyView *_errorView;
    WBProgressHUD *_hud;
    NSString *_titleStr;
    NSString *_descStr;
    _Bool isInLoginManager;
    _Bool _isTranslucentBg;
    _Bool _currentTranslucentBg;
    _Bool _isWhiteTitleViews;
    NSDictionary *_tagParams;
    UIView *_headerView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_startButton;
    double _currentBgAlpha;
    UIBarButtonItem *_backButtonItem;
    NSString *_nextScheme;
}

@property(copy, nonatomic) NSString *nextScheme; // @synthesize nextScheme=_nextScheme;
@property(retain, nonatomic) UIBarButtonItem *backButtonItem; // @synthesize backButtonItem=_backButtonItem;
@property(nonatomic) double currentBgAlpha; // @synthesize currentBgAlpha=_currentBgAlpha;
@property(nonatomic) _Bool isWhiteTitleViews; // @synthesize isWhiteTitleViews=_isWhiteTitleViews;
@property(nonatomic) _Bool currentTranslucentBg; // @synthesize currentTranslucentBg=_currentTranslucentBg;
@property(nonatomic) _Bool isTranslucentBg; // @synthesize isTranslucentBg=_isTranslucentBg;
@property(retain, nonatomic) UIButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSDictionary *tagParams; // @synthesize tagParams=_tagParams;
@property(nonatomic) _Bool isInLoginManager; // @synthesize isInLoginManager;
- (void).cxx_destruct;
- (void)didClickedRecommendUserCard:(id)arg1 isSelected:(_Bool)arg2;
- (void)refreshNavAndStatusBarStyle;
- (void)changeTitleViewAlpha:(double)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getUserWithIndexPath:(id)arg1;
- (_Bool)isInterestSelectedAtIndexpath:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)followOfficalAccountSilently;
- (_Bool)remindFollowOfficalAccountIfNeeded;
- (void)getOfficialAccountInfomation;
- (void)didRemindedFollowOfficailAccount;
- (_Bool)hasRemindedFollowOfficailAccount;
- (void)configViewsInfoWithContent:(id)arg1;
- (void)requestRecommendGroup;
- (id)getParamsWithSelectedUsers;
- (void)dismissAfterEvent;
- (void)startButtonClicked:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)configTitleViews:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)initErrorContentView;
- (void)configSubviewsFrame;
- (void)setupSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)updatePropertyWithPara:(id)arg1 context:(id)arg2 currentStep:(unsigned long long)arg3;
- (id)moduleID;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

