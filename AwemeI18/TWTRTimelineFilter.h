//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSSet;

@interface TWTRTimelineFilter : NSObject <NSCopying>
{
    NSSet *_keywords;
    NSSet *_hashtags;
    NSSet *_handles;
    NSSet *_urls;
}

@property(copy, nonatomic) NSSet *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSSet *handles; // @synthesize handles=_handles;
@property(copy, nonatomic) NSSet *hashtags; // @synthesize hashtags=_hashtags;
@property(copy, nonatomic) NSSet *keywords; // @synthesize keywords=_keywords;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)filterCount;
- (id)initWithJSONDictionary:(id)arg1;

@end

