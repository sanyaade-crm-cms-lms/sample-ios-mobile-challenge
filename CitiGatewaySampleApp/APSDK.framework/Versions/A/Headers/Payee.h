//
//  Payee.h
//  AnyPresence SDK
//

/*!
 @header Payee
 @abstract Payee class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class Payee
 @abstract Generated model object: Payee.
 @discussion Use @link //apple_ref/occ/cat/Payee(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/Payee/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface Payee : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a Payee.
 @result Class representing the data source associated with a Payee.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var addPayeeDetails
 @abstract Generated model property: add_payee_details.
 */
@property (nonatomic, strong) NSDictionary * addPayeeDetails;

/*!
 @var bankNameExt
 @abstract Generated model property: bank_name_ext.
 */
@property (nonatomic, strong) NSString * bankNameExt;

/*!
 @var detailPrefix
 @abstract Generated model property: detail_prefix.
 */
@property (nonatomic, strong) NSString * detailPrefix;

/*!
 @var lastPaymentAmt
 @abstract Generated model property: last_payment_amt.
 */
@property (nonatomic, strong) NSNumber * lastPaymentAmt;

/*!
 @var payeeAccount
 @abstract Generated model property: payee_account.
 */
@property (nonatomic, strong) NSString * payeeAccount;

/*!
 @var payeeDescription
 @abstract Generated model property: payee_description.
 */
@property (nonatomic, strong) NSString * payeeDescription;

/*!
 @var payeeListIdTwo
 @abstract Generated model property: payee_list_id_two.
 */
@property (nonatomic, strong) NSNumber * payeeListIdTwo;

/*!
 @var payeeListIdType
 @abstract Generated model property: payee_list_id_type.
 */
@property (nonatomic, strong) NSNumber * payeeListIdType;

/*!
 @var payeeType
 @abstract Generated model property: payee_type.
 */
@property (nonatomic, strong) NSNumber * payeeType;

/*!
 @var paymentMethod
 @abstract Generated model property: payment_method.
 */
@property (nonatomic, strong) NSString * paymentMethod;

@end
