//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TCTaggedMessage : NSObject
{
    int mMessageTag;
    NSString *mMessageText;
}

+ (id)taggedMessageWithMessageText:(id)arg1;
@property(readonly, copy, nonatomic) NSString *messageText; // @synthesize messageText=mMessageText;
@property(readonly, nonatomic) int messageTag; // @synthesize messageTag=mMessageTag;
- (void).cxx_destruct;
- (id)initWithMessageText:(id)arg1;

@end

