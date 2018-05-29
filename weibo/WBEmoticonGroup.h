//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface WBEmoticonGroup : NSObject
{
    NSDictionary *_emoticonsMap;
    _Bool _groupDisplayOnly;
    NSArray *_emoticons;
    NSString *_resourcePath;
    NSString *_groupIconName;
    NSString *_groupIdentifier;
    double _groupVersion;
    long long _groupType;
}

@property(readonly, nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) double groupVersion; // @synthesize groupVersion=_groupVersion;
@property(readonly, nonatomic) _Bool groupDisplayOnly; // @synthesize groupDisplayOnly=_groupDisplayOnly;
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, copy, nonatomic) NSString *groupIconName; // @synthesize groupIconName=_groupIconName;
@property(readonly, nonatomic) NSArray *emoticons; // @synthesize emoticons=_emoticons;
- (void).cxx_destruct;
- (void)cleanImageCache;
- (void)didReceiveMemoryWarning:(id)arg1;
- (long long)emoticonCount;
- (_Bool)canPublish;
- (id)emoticonAtIndex:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
- (id)emoticonNamed:(id)arg1;
- (id)initWithCachePath:(id)arg1;
- (id)initWithBundlePath:(id)arg1;
- (id)initWithDictionary:(id)arg1 path:(id)arg2;
- (void)dealloc;
- (long long)numberOfPages;

@end

