//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSURL;

@interface GEOURLWithHeaders : NSObject
{
    NSURL *_URL;
    NSDictionary *_headerFields;
}

@property(readonly, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 headerFields:(id)arg2;
- (id)init;

@end

