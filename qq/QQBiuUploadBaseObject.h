//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/MulMemSelBusiProcessDelegate-Protocol.h>
#import <QQMainProject/QQBiuFacePanelControllerDelegate-Protocol.h>
#import <QQMainProject/QQFaceKeyBoardDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, QQBiuFacePanelController, QQHotPicView, UIButton, UILabel, UIView;
@protocol QQBiuUploadBaseObjectDelegate;

@interface QQBiuUploadBaseObject : NSObject <UIGestureRecognizerDelegate, QQFaceKeyBoardDelegate, QQBiuFacePanelControllerDelegate, UIActionSheetDelegate, MulMemSelBusiProcessDelegate>
{
    QQBiuFacePanelController *_facePanel;
    unsigned long long _enterMode;
    unsigned long long _bottomBarMode;
    UIView *_toolbarView;
    UILabel *_textCountLabel;
    UIButton *_expressionBtn;
    UIView *_parentView;
    id <QQBiuUploadBaseObjectDelegate> _delegate;
    QQHotPicView *_hotPicView;
    UIButton *_atButton;
    UIButton *_hotPicButton;
    double _showFriendSelectVCTime;
    struct CGRect _countLabelFrame;
}

+ (long long)commentGifSwitchMode;
+ (long long)commentAtSwitchMode;
+ (long long)ugcAtSwitchMode;
+ (long long)biuAtSwitchMode;
@property(nonatomic) double showFriendSelectVCTime; // @synthesize showFriendSelectVCTime=_showFriendSelectVCTime;
@property(retain, nonatomic) UIButton *hotPicButton; // @synthesize hotPicButton=_hotPicButton;
@property(retain, nonatomic) UIButton *atButton; // @synthesize atButton=_atButton;
@property(retain, nonatomic) QQHotPicView *hotPicView; // @synthesize hotPicView=_hotPicView;
@property(nonatomic) __weak id <QQBiuUploadBaseObjectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) UIButton *expressionBtn; // @synthesize expressionBtn=_expressionBtn;
@property(retain, nonatomic) UILabel *textCountLabel; // @synthesize textCountLabel=_textCountLabel;
@property(nonatomic) struct CGRect countLabelFrame; // @synthesize countLabelFrame=_countLabelFrame;
@property(retain, nonatomic) UIView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(nonatomic) unsigned long long bottomBarMode; // @synthesize bottomBarMode=_bottomBarMode;
- (void).cxx_destruct;
- (void)onBusinessProcessPopCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)onBusinessProcessCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)showFriendSelectController:(long long)arg1 andNavi:(id)arg2 andOutAt:(_Bool)arg3;
- (void)showFriendSelectController:(long long)arg1 andNavi:(id)arg2;
- (void)adjustSubviewsLayoutWithMode:(unsigned long long)arg1;
- (void)setToolbarMode:(unsigned long long)arg1 andOutAt:(_Bool)arg2;
- (void)setToolbarMode:(unsigned long long)arg1;
- (void)showTextCountLable;
- (void)hideTextCountLable;
- (void)refreshTextCountLable:(long long)arg1;
- (void)onBiuViewBeginEdit;
- (void)hideKeyboardWhenQuit;
- (void)showLastBottomBar;
- (void)showKeyboard;
- (void)faceChoosed:(id)arg1;
- (void)cellStopAtPoint:(id)arg1 data:(id)arg2 view:(id)arg3;
- (void)cellMoveToPoint:(id)arg1 view:(id)arg2;
- (void)cellDidTapped:(id)arg1 onKeyBoard:(id)arg2;
- (_Bool)showFaceKeyboardForItemDelegate:(id)arg1 ID:(long long)arg2 forPage:(long long)arg3;
- (void)initfacepanel;
- (void)hideMyFacePanel;
- (void)showMyFacePanel;
- (void)hideHotPicView;
- (void)hideQQEmotionButton;
- (void)hideHotPicButton;
- (void)showHotPicView;
- (_Bool)isHotPicShowVideo;
- (void)onClickHotPic:(id)arg1;
- (void)onClickExpressionBtn;
- (void)onClickAtButton;
- (void)createToolbarView:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

