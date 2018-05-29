//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "WGVIPCellDelegate-Protocol.h"

@class NSArray, NSString, WGGameplatUserinfo;

@interface WGVIPTableViewController : WBTableViewController <WGVIPCellDelegate>
{
    int _vip;
    WGGameplatUserinfo *_platUserinfo;
    NSArray *_vipArr;
}

@property(retain, nonatomic) NSArray *vipArr; // @synthesize vipArr=_vipArr;
@property(retain, nonatomic) WGGameplatUserinfo *platUserinfo; // @synthesize platUserinfo=_platUserinfo;
@property(nonatomic) int vip; // @synthesize vip=_vip;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)wgVIPCellItemDidSelected:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableViewFrameDidChange:(id)arg1;
- (void)back:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

