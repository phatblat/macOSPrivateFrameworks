//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PKAddressSearchResults : NSObject
{
    NSArray *_contactSearchResults;
    NSArray *_completionSearchResults;
}

@property(retain, nonatomic) NSArray *completionSearchResults; // @synthesize completionSearchResults=_completionSearchResults;
@property(retain, nonatomic) NSArray *contactSearchResults; // @synthesize contactSearchResults=_contactSearchResults;
- (void).cxx_destruct;
- (void)reset;

@end
