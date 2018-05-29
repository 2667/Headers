//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CvAbstractCamera.h"

@class AVCaptureStillImageOutput;
@protocol CvPhotoCameraDelegate;

@interface CvPhotoCamera : CvAbstractCamera
{
    AVCaptureStillImageOutput *stillImageOutput;
    id <CvPhotoCameraDelegate> _delegate;
}

@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput;
- (void)createCustomVideoPreview;
- (void)createCaptureOutput;
- (void)createStillImageOutput;
- (void)stop;
- (void)takePicture;
@property(nonatomic) __weak id <CvPhotoCameraDelegate> delegate;

@end

