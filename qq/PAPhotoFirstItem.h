//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQPAAlbumPhoto.h>

@class NSString;

@interface PAPhotoFirstItem : QQPAAlbumPhoto
{
    NSString *_photoTime;
    NSString *_authorName;
    NSString *_paName;
}

@property(retain, nonatomic) NSString *paName; // @synthesize paName=_paName;
@property(retain, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(retain, nonatomic) NSString *photoTime; // @synthesize photoTime=_photoTime;
- (void).cxx_destruct;
- (void)notifyDownloadFail:(id)arg1;

@end
