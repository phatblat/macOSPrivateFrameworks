//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SFMessageSessionRequestEntry : NSObject
{
    BOOL _allowUnencrypted;
    CDUnknownBlockType _handler;
    NSDictionary *_options;
}

@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) BOOL allowUnencrypted; // @synthesize allowUnencrypted=_allowUnencrypted;
- (void).cxx_destruct;

@end

