//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQActivityViewController.h>

#import <QQMainProject/AvatarServiceDelegate-Protocol.h>
#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>
#import <QQMainProject/QQFriendSelectedViewControllerDelegate-Protocol.h>
#import <QQMainProject/QQGroupLinkDelegate-Protocol.h>
#import <QQMainProject/QQStructureMsgUtilityDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>

@class NSArray, NSString, QQFriendSelectedViewController, QQGroupSettingModel, QQHttpClientSession, QQRichMsgPreviewDialog, QQStructureMsgUtility, QQViewController, UIButton, UIImage, UIImageView;
@protocol DiscussGroupLinkShareDelegate, QQGroupLinkShareSendDelegate;

@interface QQGroupLinkShareController : QQActivityViewController <AvatarServiceDelegate, QQStructureMsgUtilityDelegate, IEngineDispatchDelegate, UIActionSheetDelegate, QQGroupLinkDelegate, QQFriendSelectedViewControllerDelegate>
{
    NSArray *_activities;
    UIImageView *_sheetBgView;
    UIButton *_cancelButton;
    int _shareType;
    _Bool _actionShareGroupLink;
    _Bool _actionShareGroupLinkWithoutAuth;
    _Bool _groupLinkGetFailed;
    _Bool _groupLinkGetFailedWithoutAuth;
    NSString *_groupJoinLink;
    NSString *_groupJoinLinkWithoutAuth;
    _Bool _toDetach;
    QQFriendSelectedViewController *_friendSelectedViewController;
    QQRichMsgPreviewDialog *_richMsgPreDlg;
    int _ssoSeq;
    QQHttpClientSession *_session;
    _Bool _needAuth;
    long long _discussGroupCode;
    NSString *_discussGroupName;
    NSString *_discussGroupOwnerName;
    NSString *_discussGroupShareLink;
    UIImageView *_discussGroupHeadView;
    int _eLinkShareType;
    id <DiscussGroupLinkShareDelegate> _delegateDiscussGroup;
    _Bool _isLoadGroupIcon;
    _Bool _usedGetURL;
    _Bool _waitingForImage;
    int _sourceType;
    QQViewController *_parent;
    QQGroupSettingModel *_groupModel;
    UIImage *_groupIcon;
    UIImage *_qrcodeImage;
    NSString *_qrcodeDesc;
    id <QQGroupLinkShareSendDelegate> _sendDelegate;
    NSString *_link;
    QQStructureMsgUtility *_structureMsgUtility;
}

@property(retain, nonatomic) QQStructureMsgUtility *structureMsgUtility; // @synthesize structureMsgUtility=_structureMsgUtility;
@property(nonatomic) _Bool waitingForImage; // @synthesize waitingForImage=_waitingForImage;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) __weak id <QQGroupLinkShareSendDelegate> sendDelegate; // @synthesize sendDelegate=_sendDelegate;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) _Bool usedGetURL; // @synthesize usedGetURL=_usedGetURL;
@property(nonatomic) _Bool isLoadGroupIcon; // @synthesize isLoadGroupIcon=_isLoadGroupIcon;
@property(retain, nonatomic) NSString *qrcodeDesc; // @synthesize qrcodeDesc=_qrcodeDesc;
@property(retain, nonatomic) UIImage *qrcodeImage; // @synthesize qrcodeImage=_qrcodeImage;
@property(retain, nonatomic) UIImageView *discussGroupHeadView; // @synthesize discussGroupHeadView=_discussGroupHeadView;
@property(retain, nonatomic) NSString *discussGroupName; // @synthesize discussGroupName=_discussGroupName;
@property(retain, nonatomic) NSString *discussGroupOwnerName; // @synthesize discussGroupOwnerName=_discussGroupOwnerName;
@property(retain, nonatomic) UIImage *groupIcon; // @synthesize groupIcon=_groupIcon;
@property(retain, nonatomic) QQGroupSettingModel *groupModel; // @synthesize groupModel=_groupModel;
@property(nonatomic) QQViewController *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (id)reportOPNameWithQRType:(int)arg1;
- (id)reportOPNameWithType:(int)arg1;
- (void)shareToFriendSuccess;
- (void)doShareReportWithType:(id)arg1 result:(_Bool)arg2;
- (void)requestShareLink:(unsigned long long)arg1;
- (id)shareGroupSummary;
- (id)shareGroupName;
- (void)doShareToQZoneQRCodeInfo;
- (void)doShareToQQImage:(id)arg1;
- (id)clipimage:(id)arg1 rect:(struct CGRect)arg2;
- (id)scaleToSizeByAspectMax:(id)arg1 targetSize:(double)arg2;
- (void)doShareToWeiXinImage:(id)arg1;
- (void)doShareToFriendsImage:(id)arg1;
- (void)shareGroupQRCode;
- (void)dealloc;
- (void)cancel;
- (void)didShareGroupLink:(id)arg1 result:(_Bool)arg2;
- (void)groupLinkActivityDidAction:(id)arg1;
- (void)shareDiscussGroupLinkToQQ:(id)arg1;
- (void)shareDiscussGroupLink:(id)arg1;
- (void)requestGroupLink:(unsigned long long)arg1 needAuth:(_Bool)arg2;
- (void)qqHttpSessionDidLoad:(id)arg1:(id)arg2;
- (void)cancelButtonClick;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
- (id)defaultWordingWithGroupName:(id)arg1 groupCode:(unsigned long long)arg2;
- (long long)getBknFromSkey:(id)arg1;
- (void)test;
- (id)buildMessageBody;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsgForServiceCmd:(const CDStruct_7895f40e *)arg1;
- (void)didRecievedMsgForProtoSsoCmd:(const CDStruct_7895f40e *)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)requestGroupLinkWithoutAuth;
- (id)buildFriendGroupListViewController:(id)arg1;
- (void)showShareLinkDialog;
- (void)showQrCode;
- (void)doCopyLink:(id)arg1;
- (void)doShareToQrcode:(id)arg1;
- (void)doShareToWeibo:(id)arg1;
- (void)doShareToQZone:(id)arg1;
- (void)onGetImage:(id)arg1;
- (void)onGetImageUrl:(id)arg1 withImage:(id)arg2;
- (void)didFailedDownloadingImage:(id)arg1 type:(int)arg2 size:(int)arg3 shape:(int)arg4 avatarInfo:(id)arg5;
- (void)didFailedGetAvatarInfo:(id)arg1 type:(int)arg2;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)uploadShareImageFailed:(int)arg1;
- (void)uploadShareImageSuccess:(id)arg1;
- (void)doShareToQQ:(id)arg1;
- (void)doShareToWeiXin:(id)arg1;
- (id)compressGroupHeadImageLimitTo32K:(id)arg1;
- (void)doShareToFriends:(id)arg1;
- (void)shareGroupLink:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showGroupLinkActionSheet:(int)arg1;
- (void)copyLink:(id)arg1;
- (void)shareToWeibo:(id)arg1;
- (void)shareToQZone:(id)arg1;
- (void)shareToQQ:(id)arg1;
- (void)shareToWeiXin:(id)arg1;
- (void)shareToFriends:(id)arg1;
- (void)reportGroupLinkShare:(id)arg1 needAuth:(_Bool)arg2;
- (void)reportGroupLinkClickEvent:(_Bool)arg1;
- (void)dismiss;
- (void)prepareForDataRequest;
- (id)initWithFlag:(unsigned int)arg1;
- (id)initWithLinkShareType:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

