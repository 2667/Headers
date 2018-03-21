//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/SCFBaseViewController.h>

#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SCFSettingViewControllerModel, UITableView;
@protocol SCFSettingViewControllerDelegate;

@interface SCFSettingViewController : SCFBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_arDataSource;
    NSMutableDictionary *_mdicFooterView;
    id <SCFSettingViewControllerDelegate> _delegate;
    SCFSettingViewControllerModel *_settingModel;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SCFSettingViewControllerModel *settingModel; // @synthesize settingModel=_settingModel;
@property(nonatomic) __weak id <SCFSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)qzoneOnSwitchRequest;
- (void)ringOnSwitchRequest;
- (void)careFriendSwitchRequest;
- (void)cancelCareAction:(id)arg1;
- (void)switchAction:(id)arg1;
- (void)cancelAddCareAction:(id)arg1;
- (void)completeAddCareAction:(id)arg1;
- (void)updateCell:(id)arg1 withRowType:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadSettingViewControllerModel;
- (void)constructionDataSource;
- (long long)rowTypeForIndexPath:(id)arg1;
- (id)sectionFooterViewForType:(long long)arg1 section:(long long)arg2;
- (id)dataSourceForType:(long long)arg1;
- (id)tableHeaderViewForType:(long long)arg1;
- (id)tableFooterViewForType:(long long)arg1;
- (void)createRightButtonForType:(long long)arg1;
- (void)createLeftButtonForType:(long long)arg1;
- (_Bool)isNeedRequestForSwitchAction:(long long)arg1;
- (_Bool)isDisconnectedAndShowAlert;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
