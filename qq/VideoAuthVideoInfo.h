//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface VideoAuthVideoInfo : NSObject
{
    NSString *_path;
    unsigned long long _videoSize;
}

@property(nonatomic) unsigned long long videoSize; // @synthesize videoSize=_videoSize;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 videoSize:(unsigned long long)arg2;

@end

