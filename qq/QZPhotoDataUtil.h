//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QZPhotoDataUtil : NSObject
{
}

+ (id)fakeVideoTimeOut:(id)arg1;
+ (id)removeFakeVideoFeeds:(id)arg1 isThemeAlbum:(_Bool)arg2 fake:(id)arg3 tipBlock:(CDUnknownBlockType)arg4;
+ (_Bool)uploadTimeIsToday:(id)arg1;
+ (void)getFakeVideoList:(id)arg1 collection:(id)arg2 isThemeAlbum:(_Bool)arg3;
+ (id)createFakePhotoList:(id)arg1 collection:(id)arg2;
+ (long long)rowTypeFromAnomity:(long long)arg1;
+ (double)headerHeightFromAnomity:(long long)arg1 title:(id)arg2;
+ (id)collectionToSetion:(id)arg1 anonymity:(long long)arg2 isHost:(_Bool)arg3 isThemeAlbum:(_Bool)arg4 status:(long long)arg5 mode:(long long)arg6 template:(id)arg7 individual:(_Bool)arg8 block:(CDUnknownBlockType)arg9 hasMoreUntimePhotos:(_Bool)arg10 canShowUnTimeCell:(_Bool)arg11;

@end

