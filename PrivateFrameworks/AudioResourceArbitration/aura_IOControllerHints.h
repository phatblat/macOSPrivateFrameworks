//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface aura_IOControllerHints : NSObject
{
    unsigned char ioControllerType;
    optional_488f82df bufferSize;
    optional_fcefa02e sampleRate;
    optional_ce918c5b clock;
    optional_21a71da4 inputIOStreamHints;
    optional_21a71da4 outputIOStreamHints;
}

@property(nonatomic) optional_21a71da4 outputIOStreamHints; // @synthesize outputIOStreamHints;
@property(nonatomic) optional_21a71da4 inputIOStreamHints; // @synthesize inputIOStreamHints;
@property(nonatomic) optional_ce918c5b clock; // @synthesize clock;
@property(nonatomic) optional_488f82df bufferSize; // @synthesize bufferSize;
@property(nonatomic) optional_fcefa02e sampleRate; // @synthesize sampleRate;
@property(nonatomic) unsigned char ioControllerType; // @synthesize ioControllerType;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

