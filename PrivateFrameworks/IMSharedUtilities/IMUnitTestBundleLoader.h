//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMUnitTestLogger;

@interface IMUnitTestBundleLoader : NSObject
{
    IMUnitTestLogger *_logger;
}

@property(readonly) IMUnitTestLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (BOOL)loadTestBundle:(id)arg1 bundle:(id *)arg2 error:(id *)arg3;
- (id)initWithLogger:(id)arg1;

@end

