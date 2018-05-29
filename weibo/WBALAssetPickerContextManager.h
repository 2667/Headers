//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MPTWBVideoEditViewControllerDelegate-Protocol.h"
#import "WBAssetImagePickerPhotoControllerDelegate-Protocol.h"
#import "WBCameraAccessGuideViewControllerDelegate-Protocol.h"
#import "WBCustomImagePickerViewControllerDelegate-Protocol.h"
#import "WBImageEditViewControllerDelegate-Protocol.h"
#import "WBMediaCameraViewControllerDelegate-Protocol.h"
#import "WBPhotoAccessGuideViewControllerDelegate-Protocol.h"
#import "WBStaticImageCropperViewControllerDelegate-Protocol.h"
#import "WBVideoEditorControllerDelegate-Protocol.h"
#import "WBVideoEditorViewControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIViewController, WBAssetPickerContextSetting, WBViewController;
@protocol WBALAssetPickerContextManagerDelegate;

@interface WBALAssetPickerContextManager : NSObject <WBAssetImagePickerPhotoControllerDelegate, WBCustomImagePickerViewControllerDelegate, WBImageEditViewControllerDelegate, WBStaticImageCropperViewControllerDelegate, WBPhotoAccessGuideViewControllerDelegate, WBCameraAccessGuideViewControllerDelegate, WBVideoEditorViewControllerDelegate, WBMediaCameraViewControllerDelegate, MPTWBVideoEditViewControllerDelegate, WBVideoEditorControllerDelegate>
{
    NSMutableArray *_selectedAttachments;
    _Bool _isPreviousVideoMode;
    _Bool _isPicking;
    _Bool _videoEditingDisabled;
    _Bool _isCorpEnabled;
    _Bool _shouldSaveAlbumAutomatically;
    _Bool _isHidenCameraButton;
    _Bool _isAsyncCapture;
    _Bool _isVipSticker;
    _Bool _isShowBarSticker;
    _Bool _isShouldKeepInitialFilterOrSticker;
    _Bool _cameraModeSwitchingDisabled;
    _Bool _forcePreview;
    int _pickerType;
    WBAssetPickerContextSetting *_contextSetting;
    id <WBALAssetPickerContextManagerDelegate> _delegate;
    NSString *_doneButtonTitle;
    unsigned long long _cropStyle;
    double _cropImageRatio;
    UIViewController *_baseController;
    WBViewController *_controller;
    NSString *_getStickerIDs;
    long long _captureDevicePosition;
    double _maximumVideoCaptureDuration;
    long long _maxAllowVideoDuration;
}

+ (struct CGPoint)convertToPointOfInterestFromViewCoordinates:(struct CGPoint)arg1 view:(id)arg2 AVCaptureDeviceInput:(id)arg3 AVCaptureVideoPreviewLayer:(id)arg4 preViewScale:(double)arg5;
+ (void)currentNewestPhotos:(unsigned long long)arg1 afterDate:(id)arg2 WithCompletionBlock:(CDUnknownBlockType)arg3;
+ (void)removeDirectoryForDictionary:(id)arg1;
+ (void)removeDirectoryForURL:(id)arg1;
+ (id)writeGIFImageToFile:(id)arg1 withDestPath:(id)arg2 error:(id *)arg3;
+ (id)writeImageToFile:(id)arg1 withDestPath:(id)arg2 error:(id *)arg3;
+ (id)writeImageToFile:(id)arg1 error:(id *)arg2;
@property(nonatomic) _Bool forcePreview; // @synthesize forcePreview=_forcePreview;
@property(nonatomic) long long maxAllowVideoDuration; // @synthesize maxAllowVideoDuration=_maxAllowVideoDuration;
@property(nonatomic) double maximumVideoCaptureDuration; // @synthesize maximumVideoCaptureDuration=_maximumVideoCaptureDuration;
@property(nonatomic) long long captureDevicePosition; // @synthesize captureDevicePosition=_captureDevicePosition;
@property(nonatomic) _Bool cameraModeSwitchingDisabled; // @synthesize cameraModeSwitchingDisabled=_cameraModeSwitchingDisabled;
@property(nonatomic) _Bool isShouldKeepInitialFilterOrSticker; // @synthesize isShouldKeepInitialFilterOrSticker=_isShouldKeepInitialFilterOrSticker;
@property(retain, nonatomic) NSString *getStickerIDs; // @synthesize getStickerIDs=_getStickerIDs;
@property(nonatomic) _Bool isShowBarSticker; // @synthesize isShowBarSticker=_isShowBarSticker;
@property(nonatomic) _Bool isVipSticker; // @synthesize isVipSticker=_isVipSticker;
@property(nonatomic) __weak WBViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) _Bool isAsyncCapture; // @synthesize isAsyncCapture=_isAsyncCapture;
@property(nonatomic) __weak UIViewController *baseController; // @synthesize baseController=_baseController;
@property(nonatomic) _Bool isHidenCameraButton; // @synthesize isHidenCameraButton=_isHidenCameraButton;
@property(nonatomic) int pickerType; // @synthesize pickerType=_pickerType;
@property(nonatomic) double cropImageRatio; // @synthesize cropImageRatio=_cropImageRatio;
@property(nonatomic) _Bool shouldSaveAlbumAutomatically; // @synthesize shouldSaveAlbumAutomatically=_shouldSaveAlbumAutomatically;
@property(nonatomic) unsigned long long cropStyle; // @synthesize cropStyle=_cropStyle;
@property(nonatomic) _Bool isCorpEnabled; // @synthesize isCorpEnabled=_isCorpEnabled;
@property(copy, nonatomic) NSString *doneButtonTitle; // @synthesize doneButtonTitle=_doneButtonTitle;
@property(nonatomic) _Bool videoEditingDisabled; // @synthesize videoEditingDisabled=_videoEditingDisabled;
@property(nonatomic) __weak id <WBALAssetPickerContextManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) _Bool isVipSubscribe;
@property(nonatomic) _Bool vipSubscribeEnable;
@property(nonatomic) _Bool isSupportPreviewMultiImageEnterEditView;
@property(copy, nonatomic) NSArray *customStickersArray;
@property(nonatomic) _Bool isPanoramaAllowed;
@property(nonatomic) _Bool isGifAllowed;
@property(nonatomic) _Bool isLivePhotoAllowed;
@property(nonatomic) _Bool tagEditable;
@property(nonatomic) _Bool isUploadHighQualityEnabled;
@property(nonatomic) _Bool isEditingEnabled;
@property(nonatomic) _Bool alwayEnableEditWhenShooting;
@property(nonatomic) unsigned long long maxAllowSelectCount;
@property(retain, nonatomic) NSString *initialSourceUICode;
@property(retain, nonatomic) NSString *initialSelectedStickerID;
@property(retain, nonatomic) NSString *initialSelectedFilterID;
@property(nonatomic) _Bool isUploadHighQuality;
- (void)setInitialSelectCount:(unsigned long long)arg1;
- (void)reArrangeSelectedCacheBasedOnCache:(id)arg1;
- (id)openPHImagePickerController;
- (id)openImagePickerController:(id)arg1;
- (id)openCustomCameraViewController;
@property(readonly, nonatomic) WBAssetPickerContextSetting *contextSetting; // @synthesize contextSetting=_contextSetting;
- (void)imageCropperDidCancel:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2 withCropRect:(struct CGRect)arg3;
- (void)videoEditor:(id)arg1 didCancelEditingWithResultVideoCache:(id)arg2;
- (void)videoEditor:(id)arg1 didFinishEditingWithResultVideoCache:(id)arg2;
- (void)imageEditor:(id)arg1 didCancelEditingwithCaches:(id)arg2;
- (void)imageEditor:(id)arg1 didFinishEditingWithCaches:(id)arg2;
- (void)assetImagePickerPhotoController:(id)arg1 didSelectedPHAsset:(id)arg2;
- (void)assetImagePickerPhotoControllerDidCancel:(id)arg1;
- (void)assetImagePickerPhotoController:(id)arg1 didFinishSelectedFromCamera:(id)arg2;
- (void)assetImagePickerPhotoController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)assetImagePickerPhotoController:(id)arg1 didSelectedAsset:(id)arg2;
- (void)videoEditorDidClickBackButton:(id)arg1;
- (void)videoEditor:(id)arg1 exportVideoFailed:(id)arg2;
- (void)videoEditor:(id)arg1 exportVideoSuccess:(id)arg2;
- (void)mPTWBVideoEditor:(id)arg1 clickedFanHui:(id)arg2;
- (void)mPTWBVideoEditor:(id)arg1 daoChuShiBai:(id)arg2;
- (void)mPTWBVideoEditor:(id)arg1 daoChuWanCheng:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingVideoCache:(id)arg2;
- (void)imagePickerControllerDidPressedAlbum:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishUpdatingMediaWithImage:(id)arg2 metadata:(id)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithImage:(id)arg2 metadata:(id)arg3;
- (void)mediaCameraDidCancel:(id)arg1;
- (void)mediaCamera:(id)arg1 didFinishCaptureImageCache:(id)arg2;
- (void)mediaCamera:(id)arg1 didFinishCaptureVideoCache:(id)arg2;
- (void)WBCameraAccessGuideViewControllerCanceled:(id)arg1;
- (void)WBPhotoAccessGuideViewControllerCanceled:(id)arg1;
- (void)doAnimationTransitionFromController:(id)arg1 toController:(id)arg2;
- (void)loadAlbumError:(id)arg1;
- (void)selectPhotoFromLibraryWithCameraPicker:(id)arg1;
@property(readonly, nonatomic) _Bool isPickingData;
- (void)openCameraPicker:(_Bool)arg1;
- (void)openAlbumPicker:(_Bool)arg1 withFirstSelectCount:(unsigned long long)arg2;
- (void)openAlbumPicker:(_Bool)arg1;
- (void)updateSelectedAttachments:(id)arg1;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

