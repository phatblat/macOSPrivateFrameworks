//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VCMediaControlInfo : NSObject
{
    unsigned char _bitmap;
    unsigned long long _serializedSize;
    id <VCMediaControlInfoDelegate> _delegate;
}

@property id <VCMediaControlInfoDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) unsigned long long serializedSize; // @synthesize serializedSize=_serializedSize;
- (void)dispose;
- (void)invalidate;
- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;
- (BOOL)hasInfoType:(unsigned int)arg1;
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;
- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_475a354f *)arg3;
- (id)initWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_475a354f *)arg3;

@end

