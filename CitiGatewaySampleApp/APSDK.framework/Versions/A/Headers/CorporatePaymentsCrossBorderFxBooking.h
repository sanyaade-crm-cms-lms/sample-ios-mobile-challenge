//
//  CorporatePaymentsCrossBorderFxBooking.h
//  AnyPresence SDK
//

/*!
 @header CorporatePaymentsCrossBorderFxBooking
 @abstract CorporatePaymentsCrossBorderFxBooking class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class CorporatePaymentsCrossBorderFxBooking
 @abstract Generated model object: CorporatePaymentsCrossBorderFxBooking.
 @discussion Use @link //apple_ref/occ/cat/CorporatePaymentsCrossBorderFxBooking(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/CorporatePaymentsCrossBorderFxBooking/acceptedOn @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface CorporatePaymentsCrossBorderFxBooking : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a CorporatePaymentsCrossBorderFxBooking.
 @result Class representing the data source associated with a CorporatePaymentsCrossBorderFxBooking.
 */
+ (Class)dataSource;

/*!
 @var acceptedOn
 @abstract Generated model property: accepted_on.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * acceptedOn;

/*!
 @var acceptedBy
 @abstract Generated model property: accepted_by.
 */
@property (nonatomic, strong) NSString * acceptedBy;

/*!
 @var rateReference
 @abstract Generated model property: rate_reference.
 */
@property (nonatomic, strong) NSString * rateReference;

@end
