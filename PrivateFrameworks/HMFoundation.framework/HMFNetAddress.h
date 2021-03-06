/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFNetAddress : NSObject {
    HMFNetAddressInternal * _internal;
}

@property (nonatomic, readonly, copy) NSString *addressString;
@property (nonatomic, readonly) HMFNetAddressInternal *internal;

+ (id)localAddress;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)addressString;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithHostname:(id)arg1;
- (id)initWithSocketAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (id)shortDescription;

@end
