//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache;

@interface AWELivePresentCacheManager : NSObject
{
    NSCache *_imageCache;
}

@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
- (void).cxx_destruct;
- (void)clear;
- (void)cacheImage:(id)arg1 forKey:(id)arg2;
- (id)imageForKey:(id)arg1;
- (id)init;

@end

