//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEDetailFansCollectionViewController, AWEFanStarNavView, AWERelationEmptyView, AWERelationListDataController, AWEUserModel, NSString, UITableView, UIView;

@interface AWEFanStarViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, BTDRouterViewControllerProtocol>
{
    _Bool _isMine;
    AWEFanStarNavView *_navView;
    AWERelationEmptyView *_emptyView;
    UITableView *_tableView;
    UIView *_topLineView;
    NSString *_uid;
    unsigned long long _type;
    AWERelationListDataController *_dataController;
    long long _unreadCount;
    AWEDetailFansCollectionViewController *_fansVC;
    AWEUserModel *_user;
}

+ (void)load;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) AWEDetailFansCollectionViewController *fansVC; // @synthesize fansVC=_fansVC;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) AWERelationListDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) _Bool isMine; // @synthesize isMine=_isMine;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AWERelationEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) AWEFanStarNavView *navView; // @synthesize navView=_navView;
- (void).cxx_destruct;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)addFansControllerIfNeeded;
- (void)_setupUI;
- (void)_setupNavUI;
- (void)viewWillLayoutSubviews;
- (void)barButtonItemTapped;
- (void)backBtnClicked:(id)arg1;
- (void)_dismissEmptyView;
- (void)_showEmptyView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showFansView;
- (void)_endRefreshing;
- (void)_loadMoreData;
- (void)fetchUser;
- (void)_refreshData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

