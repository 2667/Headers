//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQMoreOptionTableViewCell.h>

#import <QQMainProject/QQGroupFileOIDBRespondDelegate-Protocol.h>
#import <QQMainProject/QQGroupFilePreviewImageDelegate-Protocol.h>
#import <QQMainProject/QQMoreOptionTableViewCellDelegate-Protocol.h>
#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>

@class NSArray, NSString, QQGroupFileInfo, QQGroupFileOIDBRequest, QQGroupFilePreviewImageRequest, QQGroupFileTask, QQGroupFolderInfo, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, UIProgressView;
@protocol QQGroupFileListCellDelegate;

@interface QQGroupFileListCell : QQMoreOptionTableViewCell <QUIActionSheetDelegate, QQGroupFilePreviewImageDelegate, QQGroupFileOIDBRespondDelegate, QQMoreOptionTableViewCellDelegate>
{
    UIImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_detailLabel;
    UILabel *_uploadDateLabel;
    UILabel *_expireDateLabel;
    UIButton *_groupNameButton;
    UIButton *_uploaderButton;
    UIProgressView *_progressView;
    NSArray *_operationButtons;
    NSArray *_deleteButtons;
    UIButton *_actionButton;
    UIButton *_transferButton;
    QQGroupFilePreviewImageRequest *_thumbnailRequest;
    UIImageView *_fileSuccessIconView;
    UILongPressGestureRecognizer *_menuGestureRecognizer;
    QQGroupFileOIDBRequest *_savePermanentReq;
    _Bool _enableUploaderButton;
    _Bool _showGroupName;
    _Bool _allowMoveFile;
    id <QQGroupFileListCellDelegate> _delegate;
    QQGroupFolderInfo *_folderInfo;
    QQGroupFileInfo *_fileInfo;
    QQGroupFileTask *_task;
}

@property(nonatomic) _Bool allowMoveFile; // @synthesize allowMoveFile=_allowMoveFile;
@property(nonatomic) _Bool showGroupName; // @synthesize showGroupName=_showGroupName;
@property(nonatomic) _Bool enableUploaderButton; // @synthesize enableUploaderButton=_enableUploaderButton;
@property(retain, nonatomic) QQGroupFileTask *task; // @synthesize task=_task;
@property(retain, nonatomic) QQGroupFileInfo *fileInfo; // @synthesize fileInfo=_fileInfo;
@property(retain, nonatomic) QQGroupFolderInfo *folderInfo; // @synthesize folderInfo=_folderInfo;
@property(nonatomic) __weak id <QQGroupFileListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setKeyWords:(id)arg1;
- (id)attributedStringFormString:(id)arg1 keyword:(id)arg2;
- (struct _NSRange)matchRangeString:(id)arg1 keyword:(id)arg2 isMatched:(_Bool *)arg3;
- (void)clickDownloadButton;
- (void)groupNameButtonAction;
- (void)clickRenameButton;
- (void)clickMoveButton;
- (void)clickDeleteFolder;
- (void)clickDeleteLocalFile;
- (void)clickDeleteServerFile;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceivedPreviewImage:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 buttonPressedInRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3 context:(id)arg4;
- (id)tableView:(id)arg1 backgroundColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleColorForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (double)tableView:(id)arg1 widthForButtonsForRowAtIndexPath:(id)arg2 buttonIndex:(int)arg3;
- (int)tableView:(id)arg1 leftButtonNumInRowAtIndexPath:(id)arg2;
- (void)uploaderButtonAction;
- (void)taskProgressDidChanged:(id)arg1;
- (void)taskStatusDidChanged:(id)arg1;
- (void)layoutSubviews;
- (void)refreshStatus;
- (void)refreshFolderDownloadInfo;
- (void)reloadButtons;
- (void)groupFileOIDBRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)groupFileOIDBRequest:(id)arg1 didReceivedRespond:(id)arg2;
- (void)savePermanent:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)showMenu:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (long long)accessibilityElementCount;
- (_Bool)isAdmin;
- (void)prepareForReuse;
@property(readonly, nonatomic) unsigned long long groupCode;
- (void)actionButtonClicked;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
