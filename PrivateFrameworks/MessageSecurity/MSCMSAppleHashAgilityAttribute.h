//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSCMSAttributeCoder.h"

@class NSData;

@interface MSCMSAppleHashAgilityAttribute : NSObject <MSCMSAttributeCoder>
{
    NSData *_hashAgilityValue;
}

@property(readonly, retain) NSData *hashAgilityValue; // @synthesize hashAgilityValue=_hashAgilityValue;
- (void).cxx_destruct;
- (id)encodeAttributeWithError:(id *)arg1;
- (id)initWithHashAgilityValue:(id)arg1;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;

@end

