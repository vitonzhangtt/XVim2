//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class DVTFilePath, DVTProvisioningProfile, NSData, NSSet, NSString;

@protocol DVTProvisioningProfileProvider <NSObject>
+ (NSString *)provisioningProfilePathExtension;
@property(readonly, nonatomic) NSSet *supportedPlatforms;
@property(readonly, nonatomic) NSString *identifier;
- (DVTProvisioningProfile *)provisioningProfileFromData:(NSData *)arg1 error:(id *)arg2;
- (DVTProvisioningProfile *)provisioningProfileFromFilePath:(DVTFilePath *)arg1 error:(id *)arg2;
- (id)initWithIdentifier:(NSString *)arg1;
@end

