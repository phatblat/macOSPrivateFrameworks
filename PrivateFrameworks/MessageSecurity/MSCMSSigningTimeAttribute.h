//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSCMSAttributeCoder.h"

@class NSDate;

@interface MSCMSSigningTimeAttribute : NSObject <MSCMSAttributeCoder>
{
    NSDate *_signingTime;
}

@property(readonly, retain) NSDate *signingTime; // @synthesize signingTime=_signingTime;
- (void).cxx_destruct;
- (id)encodeAttributeWithError:(id *)arg1;
- (id)initWithSigningTime:(id)arg1;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;

@end

