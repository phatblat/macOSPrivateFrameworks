//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface PLProcessNetworkSource : NSObject
{
    NSDictionary *_descriptionDictionary;
    NSDictionary *_countsDictionary;
    struct __NStatSource *_source;
}

@property(nonatomic) struct __NStatSource *source; // @synthesize source=_source;
@property(copy, nonatomic) NSDictionary *countsDictionary; // @synthesize countsDictionary=_countsDictionary;
@property(copy, nonatomic) NSDictionary *descriptionDictionary; // @synthesize descriptionDictionary=_descriptionDictionary;
- (void).cxx_destruct;
- (id)initWithSource:(struct __NStatSource *)arg1;

@end

