//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, QRCodeView, UIImage;

@protocol QRCodeViewDelegate <NSObject>

@optional
- (void)qrCodeView:(QRCodeView *)arg1 decodingImage:(UIImage *)arg2;
- (void)qrCodeView:(QRCodeView *)arg1 didFailToDecodeWithError:(NSError *)arg2;
- (void)qrCodeView:(QRCodeView *)arg1 didDecodeImage:(UIImage *)arg2 usingSubset:(UIImage *)arg3 withResult:(NSString *)arg4 withResultType:(int)arg5 withResultSource:(int)arg6;
- (void)qrCodeView:(QRCodeView *)arg1 willDecode:(UIImage *)arg2;
@end

