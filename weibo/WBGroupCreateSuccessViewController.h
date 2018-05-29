//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "WBGroupManagementCellDelegate-Protocol.h"
#import "WBGroupViewControllerProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSString, WBDirectionalGroup, WBGroupCreateSuccessEditHandler, WBGroupManagementActionButton;
@protocol WBGroupTableViewAdapterProtocol;

@interface WBGroupCreateSuccessViewController : WBTableViewController <WBGroupViewControllerProtocol, WBGroupManagementCellDelegate>
{
    _Bool _syncSwitchOn;
    _Bool _syncAllChecked;
    int _memberType;
    WBDirectionalGroup *_group;
    NSString *_imgLocalUrl;
    NSArray *_dataSource;
    id <WBGroupTableViewAdapterProtocol> _tableViewAdapter;
    WBGroupCreateSuccessEditHandler *_eventHandler;
    WBGroupManagementActionButton *_completeButton;
    id _networkHandle;
    NSArray *_contacts;
    NSMutableArray *_syncSettingArray;
}

@property(retain, nonatomic) NSMutableArray *syncSettingArray; // @synthesize syncSettingArray=_syncSettingArray;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) id networkHandle; // @synthesize networkHandle=_networkHandle;
@property(retain, nonatomic) WBGroupManagementActionButton *completeButton; // @synthesize completeButton=_completeButton;
@property(nonatomic) int memberType; // @synthesize memberType=_memberType;
@property(retain, nonatomic) WBGroupCreateSuccessEditHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) id <WBGroupTableViewAdapterProtocol> tableViewAdapter; // @synthesize tableViewAdapter=_tableViewAdapter;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic, getter=isSyncAllChecked) _Bool syncAllChecked; // @synthesize syncAllChecked=_syncAllChecked;
@property(nonatomic, getter=isSyncSwitchOn) _Bool syncSwitchOn; // @synthesize syncSwitchOn=_syncSwitchOn;
@property(copy, nonatomic) NSString *imgLocalUrl; // @synthesize imgLocalUrl=_imgLocalUrl;
@property(retain, nonatomic) WBDirectionalGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onRemoveContacts:(id)arg1;
- (void)_reloadContactsWithGroupID:(id)arg1 contactIDArray:(id)arg2 limit:(long long)arg3;
- (void)updateContactsCacheFromContactsPicker:(id)arg1;
- (void)groupMemberCellDidSelectContactView:(id)arg1;
- (void)groupMemberCellDidSelectAddButton:(id)arg1;
- (void)groupManagementCell:(id)arg1 success:(_Bool)arg2 showNotice:(id)arg3;
- (void)groupManagementCell:(id)arg1 switchValueChanged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)getContactsLimitForIntro;
- (long long)getUserCount;
- (int)getGroupManagementType;
- (int)getMemberType;
- (id)getContactsForIntro;
- (id)getGroup;
- (id)getTableViewDataSource;
- (id)getGroupTableView;
- (void)reloadTableView;
- (void)buildTableViewDataSourceFromGroup;
- (void)goChatViewController;
- (void)saveSyncSetting;
- (void)onActionButtonPressed:(id)arg1;
- (void)shareButtonPressed:(id)arg1;
- (void)removeObservers;
- (void)registerObservers;
- (void)loadGroupInfo;
- (void)dealloc;
- (_Bool)panToNavigation;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

