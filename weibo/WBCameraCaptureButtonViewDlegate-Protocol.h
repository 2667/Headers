//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBCameraCaptureButtonView;

@protocol WBCameraCaptureButtonViewDlegate <NSObject>
- (void)cameraButton:(WBCameraCaptureButtonView *)arg1 touchMoved:(struct CGPoint)arg2 previousLocation:(struct CGPoint)arg3;
- (void)cameraButtonTouchCanclled:(WBCameraCaptureButtonView *)arg1;
- (void)cameraButton:(WBCameraCaptureButtonView *)arg1 touchEnd:(struct CGPoint)arg2;
- (void)cameraButton:(WBCameraCaptureButtonView *)arg1 touchDown:(struct CGPoint)arg2;
@end

