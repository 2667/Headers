//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/FAPreviewRequest.h>

#import <QQMainProject/FavFileDelegate-Protocol.h>

@class NSString;

@interface FAPreviewRequestFavorite : FAPreviewRequest <FavFileDelegate>
{
}

- (void)onCallback_OnlinePreview:(int)arg1 errorType:(int)arg2;
- (void)onCallback_Thumbnail:(int)arg1 errorType:(int)arg2;
- (void)onCallback_Download:(int)arg1 errorType:(int)arg2;
- (void)onCallback_FastUpload:(int)arg1 errorType:(int)arg2;
- (void)internalRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

