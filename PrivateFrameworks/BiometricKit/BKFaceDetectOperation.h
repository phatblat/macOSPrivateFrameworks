//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BiometricKit/BKPresenceDetectOperation.h>

@interface BKFaceDetectOperation : BKPresenceDetectOperation
{
    BOOL _highPriority;
    long long _mode;
    double _timeout;
}

@property(nonatomic) BOOL highPriority; // @synthesize highPriority=_highPriority;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) long long mode; // @synthesize mode=_mode;

// Remaining properties
@property(nonatomic) __weak id <BKFaceDetectOperationDelegate> delegate; // @dynamic delegate;

@end

