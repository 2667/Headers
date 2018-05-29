//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBALAssetPickerContextManagerDelegate-Protocol.h"
#import "WBAssetImagePickerPhotoControllerDelegate-Protocol.h"
#import "WBCustomImagePickerViewControllerDelegate-Protocol.h"
#import "WBStaticImageCropperViewControllerDelegate-Protocol.h"
#import "WBTopicPickerControllerDelegate-Protocol.h"
#import "YXPublishLiveInputInfoViewDelegate-Protocol.h"

@class NSString, UIButton, UIViewController, YXCoverImagePickerButton, YXMaskGradientView, YXPublishLiveInputInfoView;
@protocol YXPublishLivePreviewViewControllerDelegate, YXStateButtonProtocol;

@interface YXPublishLivePreviewViewController : UIView <WBCustomImagePickerViewControllerDelegate, WBTopicPickerControllerDelegate, WBALAssetPickerContextManagerDelegate, WBAssetImagePickerPhotoControllerDelegate, WBStaticImageCropperViewControllerDelegate, YXPublishLiveInputInfoViewDelegate>
{
    _Bool _topicFromText;
    _Bool _hasInitNetwork;
    YXMaskGradientView *_mask;
    YXPublishLiveInputInfoView *_inputInfoView;
    UIButton<YXStateButtonProtocol> *_closeBtn;
    UIButton *_switchCameraBtn;
    UIButton *_moreBtn;
    YXCoverImagePickerButton *_coverPickerBtn;
    UIViewController<YXPublishLivePreviewViewControllerDelegate> *_delegate;
}

+ (id)showOnVC:(id)arg1;
+ (id)isShowOnVC:(id)arg1;
@property(nonatomic) _Bool hasInitNetwork; // @synthesize hasInitNetwork=_hasInitNetwork;
@property(nonatomic) _Bool topicFromText; // @synthesize topicFromText=_topicFromText;
@property(nonatomic) __weak UIViewController<YXPublishLivePreviewViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YXCoverImagePickerButton *coverPickerBtn; // @synthesize coverPickerBtn=_coverPickerBtn;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UIButton *switchCameraBtn; // @synthesize switchCameraBtn=_switchCameraBtn;
@property(retain, nonatomic) UIButton<YXStateButtonProtocol> *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) YXPublishLiveInputInfoView *inputInfoView; // @synthesize inputInfoView=_inputInfoView;
@property(retain, nonatomic) YXMaskGradientView *mask; // @synthesize mask=_mask;
- (void).cxx_destruct;
- (void)dealloc;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)keyboardWillChange:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)publishCloseBtnDidClick:(id)arg1;
- (void)publishMoreBtnDidClick:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2 withCropRect:(struct CGRect)arg3;
- (void)imageCropperDidCancel:(id)arg1;
- (void)assetImagePickerPhotoController:(id)arg1 didSelectedAsset:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithImage:(id)arg2 metadata:(id)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)assetImagePickerPhotoController:(id)arg1 didFinishSelectedFromCamera:(id)arg2;
- (void)assetImagePickerPhotoControllerDidCancel:(id)arg1;
- (void)publishCoverPickerBtnDidClick:(id)arg1;
- (void)publishSwitchCameraBtnDidClick:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)topicPickerControllerDidCancel:(id)arg1;
- (void)insertTopic:(id)arg1;
- (void)topicPickerController:(id)arg1 didFinishPickingTopic:(id)arg2;
- (void)topicBtnDidClick:(id)arg1;
- (void)publishBtnDidClick:(id)arg1;
- (void)failCityAddres;
- (void)scuessCityAddres;
- (void)locationBtnDidClick:(id)arg1;
- (void)inputInfoViewTextViewDidChange:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)loadDefaultCover;
- (_Bool)inputInfoView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

