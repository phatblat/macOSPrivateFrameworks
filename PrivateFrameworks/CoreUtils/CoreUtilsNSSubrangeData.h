//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

__attribute__((visibility("hidden")))
@interface CoreUtilsNSSubrangeData : NSData
{
    NSData *_data;
    struct _NSRange _range;
}

- (void).cxx_destruct;
- (BOOL)_isCompact;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1;
- (unsigned long long)length;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 range:(struct _NSRange)arg2;
- (id)init;

@end

