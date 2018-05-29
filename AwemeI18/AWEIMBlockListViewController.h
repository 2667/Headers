//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEIMBasicEmptyView, AWEIMBlockListDataController, AWEIMChatDetailNavView, NSString, UITableView;

@interface AWEIMBlockListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, BTDRouterViewControllerProtocol>
{
    AWEIMChatDetailNavView *_navView;
    UITableView *_tableView;
    AWEIMBasicEmptyView *_emptyView;
    AWEIMBlockListDataController *_dataController;
}

+ (void)load;
@property(retain, nonatomic) AWEIMBlockListDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) AWEIMBasicEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AWEIMChatDetailNavView *navView; // @synthesize navView=_navView;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)_setupUI;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)backBtnClicked:(id)arg1;
- (void)_dismissEmptyView;
- (void)_showEmptyView;
- (void)_endRefreshing;
- (void)_loadMoreData;
- (void)_fetchData;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

