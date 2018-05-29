//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "WBGroupViewControllerProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSString, WBDirectionalGroup, WBGroupMsgRemindSettingHandler;

@interface WBGroupMsgRemindViewController : WBTableViewController <WBGroupViewControllerProtocol>
{
    id _loadOperationHandle;
    NSString *_oldGroupMsgRemindSetting;
    NSString *_footerHintTitle;
    WBDirectionalGroup *_group;
    NSMutableArray *_settings;
    CDUnknownBlockType _syncSuccessBlock;
    NSArray *_dataSource;
    WBGroupMsgRemindSettingHandler *_settingHandler;
}

@property(retain, nonatomic) WBGroupMsgRemindSettingHandler *settingHandler; // @synthesize settingHandler=_settingHandler;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) CDUnknownBlockType syncSuccessBlock; // @synthesize syncSuccessBlock=_syncSuccessBlock;
@property(retain, nonatomic) NSMutableArray *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) WBDirectionalGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (void)syncSetting;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableViewFooterView;
- (id)getTableViewDataSource;
- (id)getGroup;
- (id)getGroupTableView;
- (void)reloadTableView;
- (void)_findSettingRowSelected;
- (void)buildTableViewDataSourceFromGroup;
- (void)configSubviewsFrame;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

