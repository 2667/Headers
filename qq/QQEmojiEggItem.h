//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQEmojiEggItem : NSObject
{
    NSString *_emojiEggHeadString;
    NSString *_emojiEggDetailString;
    NSString *_emojiEggIconString;
    double _cellheight;
}

+ (double)heightWithItem:(id)arg1;
+ (id)createWithEmojiEggHeadString:(id)arg1 withEmojiEggDetailString:(id)arg2 withEmojiEggIconString:(id)arg3;
@property(nonatomic) double cellheight; // @synthesize cellheight=_cellheight;
@property(retain, nonatomic) NSString *emojiEggIconString; // @synthesize emojiEggIconString=_emojiEggIconString;
@property(retain, nonatomic) NSString *emojiEggDetailString; // @synthesize emojiEggDetailString=_emojiEggDetailString;
@property(retain, nonatomic) NSString *emojiEggHeadString; // @synthesize emojiEggHeadString=_emojiEggHeadString;
- (void).cxx_destruct;
- (id)init;

@end

