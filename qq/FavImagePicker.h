//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQMultiImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/UIImagePickerControllerDelegate-Protocol.h>
#import <QQMainProject/UINavigationControllerDelegate-Protocol.h>

@class NSArray, NSString, QQViewController;

@interface FavImagePicker : NSObject <QQMultiImagePickerControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    int _xo;
    unsigned long long _maxSelectedCount;
    long long _maxSelectedSize;
    NSString *_sendButtonTitle;
    NSString *_overloadMessage;
    QQViewController *_viewController;
    NSArray *_favPicList;
    int _picMode;
    CDUnknownBlockType _handle;
    CDUnknownBlockType _cancel;
}

- (void)_addPicFavAsync:(id)arg1 scaleMode:(int)arg2 bAddAll:(_Bool)arg3;
- (void)_addPicFav:(id)arg1 scaleMode:(int)arg2;
- (_Bool)_getAvailableImgArr:(id)arg1 avail:(id)arg2 size:(long long *)arg3;
- (void)QQMultiImagePickerController:(id)arg1 didSendEditedPhoto:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didSelectOriginalPhotoList:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didSelectBigPhotoList:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)QQMultiImagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)startCamera:(id)arg1 handle:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3;
- (void)startCamera:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)startPick:(id)arg1 handle:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3;
- (void)startPick:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)donePicking;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long maxSelectedCount; // @dynamic maxSelectedCount;
@property(nonatomic) long long maxSelectedSize; // @dynamic maxSelectedSize;
@property(retain, nonatomic) NSString *overloadMessage; // @dynamic overloadMessage;
@property(retain, nonatomic) NSString *sendButtonTitle; // @dynamic sendButtonTitle;
@property(readonly) Class superclass;

@end

