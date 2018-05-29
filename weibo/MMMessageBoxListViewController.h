//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "MMChatTableViewCellDelegate-Protocol.h"
#import "MMMessageBoxTopBarDelegate-Protocol.h"
#import "PRLMTableViewWrapperDelegate-Protocol.h"

@class MMMessageBoxListEngine, MMMessageBoxTopBar, NSMutableArray, NSString, WBPRLMTableViewWrapper, WBProgressHUD;

@interface MMMessageBoxListViewController : WBTableViewController <MMMessageBoxTopBarDelegate, MMChatTableViewCellDelegate, PRLMTableViewWrapperDelegate>
{
    _Bool _isNeedClearDB;
    _Bool _hasMore;
    _Bool _isLoading;
    _Bool _isDeleting;
    int _currentPage;
    int _currentTabId;
    MMMessageBoxListEngine *_messageBoxListEngine;
    NSMutableArray *_messageBoxArray;
    WBPRLMTableViewWrapper *_prlmWrapper;
    WBProgressHUD *_progressHUD;
    long long _totalUnreadCount;
    long long _maxTime;
    MMMessageBoxTopBar *_topBar;
    NSMutableArray *_msgTabs;
}

@property(nonatomic) int currentTabId; // @synthesize currentTabId=_currentTabId;
@property(retain, nonatomic) NSMutableArray *msgTabs; // @synthesize msgTabs=_msgTabs;
@property(retain, nonatomic) MMMessageBoxTopBar *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) long long maxTime; // @synthesize maxTime=_maxTime;
@property(nonatomic) long long totalUnreadCount; // @synthesize totalUnreadCount=_totalUnreadCount;
@property(retain, nonatomic) WBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(nonatomic) _Bool isDeleting; // @synthesize isDeleting=_isDeleting;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) WBPRLMTableViewWrapper *prlmWrapper; // @synthesize prlmWrapper=_prlmWrapper;
@property(retain, nonatomic) NSMutableArray *messageBoxArray; // @synthesize messageBoxArray=_messageBoxArray;
@property(nonatomic) _Bool isNeedClearDB; // @synthesize isNeedClearDB=_isNeedClearDB;
@property(retain, nonatomic) MMMessageBoxListEngine *messageBoxListEngine; // @synthesize messageBoxListEngine=_messageBoxListEngine;
- (void).cxx_destruct;
- (void)unfollowMessageListNeedReloadDataNotification:(id)arg1;
- (void)postUnfollowCountNotification;
- (void)updateUnreadCount;
- (void)loadingDataFinished;
- (void)loadMore;
- (void)forceReloadData;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didSelectTopBarWithTabId:(int)arg1;
- (void)avatarButton:(id)arg1 didPressInCell:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)needsTitleBarWhenPeeking;
- (id)getCustomedTitleText;
- (void)setEmptyView;
- (void)configTableView;
- (void)skinPlainTableView:(id)arg1;
- (void)showClearMessageActionSheet;
- (void)showBlockUnfollowPriateMessageActionSheet;
- (void)moreButtonPressed:(id)arg1;
- (id)pushBlockTypeArr;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)performAnalysisActionWithCode:(id)arg1 andExtParam:(id)arg2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

