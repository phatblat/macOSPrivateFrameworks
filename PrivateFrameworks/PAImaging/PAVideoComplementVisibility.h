//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PAVideoComplementVisibility : NSObject
{
}

+ (BOOL)isVideoComplementImplicitlyHidden:(id)arg1 asset:(id)arg2;
+ (unsigned short)computeNewVideoComplementState:(unsigned short)arg1 implicitlyHidden:(BOOL)arg2 hideVideoComplement:(BOOL)arg3;
+ (unsigned short)computeNewVideoComplementStateForRevert:(BOOL)arg1;

@end

