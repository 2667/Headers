//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQChatFilesBaseHandler.h>

#import <QQMainProject/IFACategoryTableViewCellDelegate-Protocol.h>
#import <QQMainProject/QQFriendSelectedViewControllerDelegate-Protocol.h>
#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class NSMutableArray, NSString;

@interface QQChatFilesFileHandler : QQChatFilesBaseHandler <IFACategoryTableViewCellDelegate, QQFriendSelectedViewControllerDelegate, UIAlertViewDelegate, QUIActionSheetDelegate>
{
    NSMutableArray *_sectionList;
    _Bool _loading;
    NSMutableArray *_selectedIndexPath;
    _Bool _first;
    int _listType;
    NSMutableArray *_selectedFiles;
}

@property(readonly, nonatomic) NSMutableArray *selectedFiles; // @synthesize selectedFiles=_selectedFiles;
@property(nonatomic) int listType; // @synthesize listType=_listType;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)checkFlow:(id)arg1 tag:(int)arg2;
- (void)clearSelectedMessages;
- (void)batchDelete;
- (void)internalSave2WeiYun;
- (void)batchSave2WeiYun;
- (void)internalBatchDownload;
- (void)batchDownload;
- (void)shareToFriendSuccess;
- (void)batchForward;
- (void)onFileChecked:(_Bool)arg1 indexPath:(id)arg2;
- (void)didReadFileListFail:(id)arg1;
- (void)didReadFileListDone:(id)arg1;
- (void)onIconSelected:(id)arg1;
- (void)internalResume:(id)arg1;
- (void)onClickBtnResume:(id)arg1;
- (void)openFileViewController:(id)arg1;
- (void)onClickBtnView:(id)arg1;
- (void)onClickBtnStop:(id)arg1;
- (void)internalDownFile:(id)arg1;
- (void)onClickBtnDown:(id)arg1;
- (id)getHolderViewController;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadSubViews;
- (long long)selectedMediaType;
- (void)dealloc;
- (id)initWithUin:(id)arg1 type:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

