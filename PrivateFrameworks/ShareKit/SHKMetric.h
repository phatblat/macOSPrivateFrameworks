//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SHKMetric : NSObject
{
    NSString *_identifier;
    NSString *_title;
}

@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)report;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;

@end
